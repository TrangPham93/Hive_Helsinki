import sys
from ft_filter import ft_filter


def string_convert(my_string):
    '''
    Split string to words without using the string.split() method.

    Args:
        A string

    Returns:
        A list of string.
    '''
    char = ''
    my_word = ''
    word_list = []
    for char in my_string:
        if char == " " or char == '\n':
            word_list.append(my_word)
            my_word = ''
        else:
            my_word += char
    word_list.append(my_word)
    return word_list


def filterstring(str, number):
    '''
    Calculate the length of each word

    Args:
        A string
        An integer which is the desired length.

    Return:
        True if a string is longer than number, otherwise False.
    '''
    count = 0
    for s in str:
        count += 1
    if count > number:
        return True
    else:
        return False


def main():
    '''
    Error handling and command line reading.
    '''
    if len(sys.argv) < 2 or len(sys.argv) > 3:
        print("AssertionError: the arguments are bad")
    else:
        try:
            number = int(sys.argv[2])
            word_list = string_convert(sys.argv[1])
            result = ft_filter(lambda x: filterstring(x, number), word_list)
            print(result)
        except ValueError:
            print("AssertionError: the arguments are bad")
            return


if __name__ == "__main__":
    main()
