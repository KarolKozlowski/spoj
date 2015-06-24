#!/usr/bin/env python


def is_palin(string):
    arr = list(string)
    rev = arr[::-1]
    return arr == rev


def next_palin(string):
    i = int(string)+1
    while not is_palin(str(i)):
        i = i+1
    return i

if __name__ == "__main__":
    examples = int(raw_input())
    for i in range(examples):
        case = raw_input()
        print next_palin(case)
