#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int total(int values[], int size)
{
	    int sum=0;
		for ( int i= 0; i< size; i++)
		{
			sum= sum + values[i];
		}
	    return sum;
}

double mean(int values[], int size)
{
	double m= 0;
	int sum=0;
	for (int i= 0; i< size ; i++)
	{
		sum= sum+ values[i];
	}
	m= sum/size;
    return m;
}

int count(int values[], int size, int find)
{
	int c=0;
	for ( int i = 0; i< size; i++)
	{
	  if (values[i]== find)
	  {
		 c= c+1;
	  }

	}
    return c;
}

double median(int values[], int size)
{
	int s;
	double m;
	int k;
	int c;

           sort (values, values + size);
		   string inputs = "[";
	       for (int i = 0; i < size; i++)
	       {
	           inputs += to_string(values[i]);
	           if (i < size - 1)
	           {
	               inputs += ", ";
	           }
	       }
	       inputs += "]\n";


	        if (size % 2== 1)
	  	       	    		{
	  	       	    	    s= (size + 1)/2;
	  	       	    	    m= values[s-1];
	  	       	    		}
	  	       	    		else if (size % 2 == 0)
	  	       	    		{
	  	       	    		 c= (size+2)/2;
	  	       	    		 k= (size)/2;
	  	       	    		 m= (values[c-1]+ values [k-1])/2.00;
	  	       	    		}


	return m;
}


int largest(int values[], int size)
{
	int max= values[0];
	for (int i =1; i<size; i++)
	{
    if (values[i]> max)
    {
    	max= values[i];
    }
	}
	return max;
}

int smallest(int values[], int size)
{
	int min= values[0];
	for (int i =1; i<size; i++)
    {
    if (values[i] < min)
    {
    	min= values[i];
    }
	}
	return min;
}

bool tenTimes(int values[], int size)
{
	int c=0;
    for (int i= 0; i< size; i++)
    {
    	for (int j=0 ; j< size; j++)
    	{
         if (values[i]!= 0 && values[j]!= 0)
         {
         if (values[i]==(values[j])*10)
          {
           c= c+1;
          }
        }
    	}
    }
    if (c>=1)
    {
    return true;
    }
    else
    return false;
}
