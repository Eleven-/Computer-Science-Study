// Linearly search for element 'ele' in array arr[] given length of array 'n'.
// If 'ele is found then return its location, otherwise return -1

// Add Sentinel Value (https://en.wikipedia.org/wiki/Sentinel_value)
// A sentinel value is a flag value placed at the end of array as a sign for termination

int search(int arr[], int n, int ele)
{
  int i = 0;  //Counter
  int s_value = ele;
  
  if(arr[n-1] == ele)
  {
    return (n-1);
  }
  
  arr[n-1] = ele;
  
  for (;; i++)
  {
    if(arr[i] == ele)
      break;
  }
  
  if(i+1 == n)
  {
    return -1;
  }
  return i;
}

// This function can run up to 'n' times
// Each time it checks "i<n", "arr[i] == ele", and increments i
