def ft_filter(ft_function, iterable):
    '''
    Recreate the filter function. Apply the function to a iterable
    and return an iterators for which the function return true.

    Args:
        ft_function
        iterable
    Return:
        iterator (using list comprehension)
    '''
    if ft_function is None:
        ft_function = bool
    result = []
    for i in iterable:
        if ft_function(i):
            result.append(i)
    return result


'''
def myfunction(x):
    if x < 18:
        return False
    else:
        return True


def main():
    ages = [3, 4, 18, 24]
    test_none = [1, -1, 0, True, False, "str", "", None]
    # adults = filter(myfunction, ages)
    # adults = filter(None, ages)
    adults = ft_filter(myfunction, ages)
    for x in adults:
        print(x)

    test = ft_filter(None, test_none)
    for i in test:
        print(i)


if __name__ == "__main__":
    main()
'''
