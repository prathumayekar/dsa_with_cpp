bool isPresent = 0;
        int element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if(element == arr2[j])
            {
                isPresent = 1;
            }
        }

        if(!isPresent)
        {
            return element;
        }