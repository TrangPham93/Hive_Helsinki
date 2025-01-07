import sys


def ft_odd_or_even(number):
    if int(number) % 2 == 0:
        return ("I'm Even")
    elif int(number) % 2 == 1:
        return ("I'm Odd")


if __name__ == "__main__":
    if len(sys.argv) > 2:
        print("AssertionError: more than one argument is provided")
    elif len(sys.argv) == 2:
        try:
            int(sys.argv[1])
            print(ft_odd_or_even(sys.argv[1]))
        except ValueError:
            print("AssertionError: argument is not an integer")
