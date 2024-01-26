# Binary-Search
# Algorithm
1. Start
2. Declare variables: n, arr[n], low = 0, high = n-1, value, mid
3. Input: Read n, array elements, and search value from the user.
4. Set mid to (low + high) / 2
5. While low <= high
   a. If arr[mid] equals value, print "Element 
       found" and break
  b. If arr[mid] > value, set high to mid - 1
  c. If arr[mid] < value, set low to mid + 1
  d. Set mid to (low + high) / 2
6. If low > high, print "Element not found."
7. Exit

