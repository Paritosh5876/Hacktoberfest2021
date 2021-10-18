import math


class vigenereCipher(object):
    def __init__(self, key, alphabet):
        self.key = key
        self.alphabet = alphabet

    def encode(self, text):
        return calc(self, text, 'e')

    def decode(self, text):
        return calc(self, text, 'd')


def calc(self, text, t):
    times = math.ceil(len(text) / len(self.key))
    key = self.key * times
    print(key)
    result = ''
    for i, c in enumerate(text):
        if c in self.alphabet:
            index = key[i]
            shift = self.alphabet.index(index)
            start = self.alphabet.index(c)
            if t == 'e':
                result += self.alphabet[(start + shift) % len(self.alphabet)]
            else:
                result += self.alphabet[(start - shift) % len(self.alphabet)]
        else:
            result += c
    print(result)
    return result
