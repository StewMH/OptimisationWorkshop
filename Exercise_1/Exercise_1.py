


# Find total number of primes below 1 million
# time python ./Exercise_1.py

def isPrime(n) :
  for i in xrange(2,n):
    if (n%i == 0):
      return False

  return True

def main():

  maxp = 100000
  primes = []
  for i in xrange(2,maxp):
    if isPrime(i) :
      primes.append(i)
  print "There are ",  len(primes), " primes below ", maxp


#Python idiom to get a main function
if __name__ == "__main__":
  main()

