/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* plusOne(int* A, int n1, int *length_of_array) {
	// SAMPLE CODE

          *length_of_array = n1+1 ; // length of result array
          int *result = (int *) malloc(*length_of_array * sizeof(int));
          // DO STUFF HERE. NOTE : length_of_array can be n1 OR n1 + 1.
          int i=n1-1;
          int j=0;
          A[i]++;
          while(i!=1)
          {
              if(A[i]%10==0)
              {
                  A[i]=A[i]%10;
                  A[i-1]++;
              }
              i--;
          }
          if(A[i]%10==0  && A[i]!=0)
          {
              result[0]=1;
              A[i]=A[i]%10;
              j++;
          }
          /*else if(A[i]==0)
          {
              i++;
          }*/
          while(i<n1)
          {
              result[j]=A[i];
              i++;
              j++;
          }

          return result;

}

