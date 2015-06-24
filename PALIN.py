#!/usr/bin/env python


def is_palin(digit):
    reverse = 0
    num = digit

    while num != 0:
        reverse = reverse * 10 + num % 10
        num = num / 10

    return digit == reverse

def next_palin(digit):
    i = digit+1
    while not is_palin(i):
        i = i+1
    return i

if __name__ == "__main__":
    examples = int(raw_input())
    for i in range(examples):
        case = int(raw_input())
        print next_palin(case)
