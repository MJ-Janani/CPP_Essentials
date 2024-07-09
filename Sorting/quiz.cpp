int arr[] = {5,4,1,3,6,2};

std:: sort(arr,arr + 3);

will produce array that is ?

  //OUTPUT is 
  {1,4,5,3,6,2}
  as arr+3 element 3 is not included 
so 1st 3 of the elements get sorted as {1,4,5}
  remaining dont get sorted
