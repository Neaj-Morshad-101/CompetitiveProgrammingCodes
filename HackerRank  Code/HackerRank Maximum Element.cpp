int main() {

    	long stack[100000];
		int queryType = 0;
		int numberOfQueries = 0;
		long topOfStack = -1;
		long iterator = 0;
		long numberToBeInserted = 0;
		long maximumNumber = 0 ;

		scanf("%d", &numberOfQueries);

		while (numberOfQueries > 0)
		{
			//scan query type
			scanf("%d", &queryType);
			//do stack operations
			switch (queryType)
			{
			case 1:
				//push
				scanf("%ld", &numberToBeInserted);
				if (numberToBeInserted > maximumNumber)
					maximumNumber = numberToBeInserted;
				stack[++topOfStack] = numberToBeInserted;
				break;
			case 2:
				//delete
				if (stack[topOfStack] == maximumNumber)
				{
					topOfStack--;
					//current maximum is going to get deleted. We need to set up a new maximum by scanning the stack
					maximumNumber = 0;
					iterator = topOfStack;
					while (iterator > -1)
					{
						maximumNumber = stack[iterator] > maximumNumber ? stack[iterator] : maximumNumber;
						iterator--;
					}
				}
				else
					topOfStack--;
				break;
			case 3:
				//print maximum element
				printf("%ld\n", maximumNumber);
				break;
			}
			numberOfQueries--;
		}
    return 0;
}
