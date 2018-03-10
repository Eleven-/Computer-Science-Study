// Linearly search for element 'ele' in array arr[] given length of array 'n'.
// If 'ele is found then return its location, otherwise return -1

int search(int arr[], int n, int ele)
{
  int i;  //Counter
  for (i=0; i<n, i++)
  {
    if(arr[i] == ele)
      return i;
  }
  return -1;
}

// This function can run up to 'n' times
// Each time it checks "i<n", "arr[i] == ele", and increments i
