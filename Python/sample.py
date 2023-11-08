# pick random sample from a sequence

from random import sample
places = 'Paris, New York, Toronto, Los Angeles, San Francisco, London, Austin'.split()

sample(places, 3)
['Toronto,', 'London', 'Paris']
