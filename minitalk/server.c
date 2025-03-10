/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:15:12 by trpham            #+#    #+#             */
/*   Updated: 2025/03/10 14:44:10 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>

static void	signal_handler(int signal, siginfo_t *info, void *context);
static void	set_signal_action(void);
int ready_to_receive = 0;
// static void	set_signal_action(void);

int	main()
{
	int	pid;

	pid =  getpid();
	ft_putnbr_fd(pid, 1);
	ft_putstr_fd("\n", 1);
	set_signal_action();
	while (1)
	{
		if (!ready_to_receive)
			pause();
		ready_to_receive = 0;
	}
	return (0);
}

static void	set_signal_action(void)
{
	struct sigaction act;
	
	// ft_bzero(&act, sizeof(act));
	act.sa_sigaction = &signal_handler;
	sigemptyset(&act.sa_mask);
	act.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &act, NULL) == -1)
		printf("Sigaction failed to receive signal\n"); //sigaction return 0 on success and -1 on error
	if (sigaction(SIGUSR2, &act, NULL) == -1)
		printf("Sigaction failed to receive signal\n");
	sigaction(SIGTERM, &act, NULL);
}

static void	signal_handler(int signal, siginfo_t *info, void *context)
{
	static unsigned char	temp_c;
	static int				i;
	static pid_t			client_id;
	//Static variables (like global variables) are initialized as 0 if not initialized explicitly. 
	
	(void)context;
	// (void)info;
	temp_c = temp_c << 1;
	if (signal == SIGTERM)
	{
		ft_putstr_fd("Transmission completed\n", 1);
		exit(EXIT_SUCCESS);
	}
	if (info->si_pid)
		client_id = info->si_pid;

	if (signal == SIGUSR1)
	{
		// ft_putstr_fd("Receive bit 1 \n", 1);
		temp_c = temp_c | 1;
		// printf("%d\n", info->si_pid);
		kill(client_id, SIGUSR1);
	}
	else if (signal == SIGUSR2)
	{
		// ft_putstr_fd("Receive bit 0 \n", 1);
		kill(client_id, SIGUSR2);
		// printf("%d\n", info->si_pid);
	}
	
	i++;
	if (i == 8)
	{
		// if (temp_c == '\0')
		// {
		// 	ft_putstr_fd("\n", 1);
		// 	ft_putstr_fd("Transmission completed\n", 1);
		// 	// exit(EXIT_SUCCESS);
		// }
		ft_putchar_fd(temp_c, 1);
		temp_c = 0;
		i = 0;
		ready_to_receive = 1;
	}
	// send signal to client to acknowlege signal receipt for each bit
	// if (signal == SIGUSR1)
	// 	kill(info->si_pid, SIGUSR1);
	// else if (signal == SIGUSR2)
	// 	kill(info->si_pid, SIGUSR2);
	// ready_to_receive = TRUE;
}
