Binary Search is a searching technique which works on a sorted array to search an element.
This algorithm is basically based on Divide and Conquer technique.
Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.
This gives us the Advantage over Linear Search as time complexity of Linear Search is O(n) whereas time complexity of Binary Search is O(log n) as it repeatedly divides the array.
