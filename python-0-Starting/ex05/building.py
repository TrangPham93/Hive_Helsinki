import sys


def ft_building(s) -> int:
    '''
    Count all uppercase, lowercase letters, punctuation letters, digits and spaces.

    Args:
        Take a single string
        If nothing is provided, promt the user to provide one
        If more than one string is provided, print an Error.
    
    Returns:
        int: counted result.
    '''
    i = 0
    count_l, count_u, count_n, count_s, count_p = 0, 0, 0, 0, 0
    for i in range(len(s)):
        if s[i] >= 'a' and s[i] <= 'z':
            count_l += 1
        elif s[i] >= 'A' and s[i] <= 'Z':
            count_u += 1
        elif s[i] >= '0' and s[i] <= '9':
            count_n += 1
        elif s[i] in "!”#$%&'()*+,-./:;<=>?@[\\]^_`{|}~":
            count_p += 1
        elif s[i] == ' ' or (s[i] >= '\t' and s[i] <= '\r'):
            count_s += 1
    return [count_u, count_l, count_p, count_s, count_n]


def main():
    '''
    Reading the input from command line and handling errors.

    Args:
        None.

    Returns:
        Print the result on the command line.
    '''
    if len(sys.argv) == 1:
        print("What is the text to count?")
        s = sys.stdin.read()
    elif len(sys.argv) > 2:
        print("AssertionError: There are too many arguments")
        return
    else:
        s = sys.argv[1]
    result = ft_building(s)
    count = result[0] + result[1] + result[2] + result[3] + result[4]
    print(f"The text contains {count} characters:")
    print(f"{result[0]} upper letters")
    print(f"{result[1]} lower letters")
    print(f"{result[2]} punctuation marks")
    print(f"{result[3]} spaces")
    print(f"{result[4]} digits")


if __name__ == "__main__":
    main()
    print(main.__doc__)
    # help(main)
