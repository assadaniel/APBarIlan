# KNN algorithm to determine the type of an iris

**This project was made by Daniel Assa and Daniel Lifshitz.**
## Type finding
It's currently meant to implement the KNN algorithm with iris types, for a given unclassified iris, we find its *K CLOSEST NEIGHBOURS* in $O\left(n\right)$ and from them determine its type,
using the following three different types of irises: *setosa*, *virgincia*, *versicolor*. 
## Classes
 The ```Iris``` class, so we would be able to handle each iris alone.  
The ```IrisComp``` class so we would be able to compare objects where each one holds an iris and a number, and be able to work with it and use it seemlessly as a number.  
The ```IrisReader``` class so we would be able to read a file filled with information about irises and convert it to an iris object.  
The ``` KSmallestElements```, so we would be able to implement the KNN algorithm.  
and so we would be able to to determine the type of the iris given to us using the algorithm. 
## Run the code
### Requirements
In order to run the code, the program must receive a parameter $k$ as ac command line argument, for example:
```
./main 3
```

The program should also receive a file ```classified.csv``` full of classified Iris, which contains in each line $5$ columns, for example, the contents of the file should look like this:  
```
5.4,3.9,1.7,0.4,Iris-versicolor
4.6,3.4,1.4,0.3,Iris-setosa
5.0,3.4,1.5,0.2,Iris-virginica
```
The numbers in each column correspond to a feature of the iris:
1. The iris' width
2. The iris's sepal length
3. The iris's sepal width
4. The iris' petal length
5. The iris' type, from the types stated above.  
  
  
The program must also receive a file ```Unclassified.csv``` which contains the same contents as the ```classified.csv``` file, but it misses the type column (or the fifth column), thus making it a file of "unclassified" irises.  
### Compile and run
If the only files you have in your directory are the needed files, mainly ```ex1.cpp```, ```Iris.cpp```, ```IrisComp.cpp```, ```IrisReader.cpp```, and  ```KSmallestElements.cpp``` **and their headers (.hpp)**.
You can compile the code with this command:  
```
g++ -std=c++11 *.cpp -o program
```
Otherwise you need to list them:
```
g++ -std=c++11  ex1.cpp Iris.cpp IrisComp.cpp IrisReader.cpp KSmallestElements.cpp -o program
```
And run on linux/mac: 
```
./program 9
```
and on windows:
```
program 9
```
Here $k=9$.  
**Make sure the ```classified.csv``` and ```Unclassified.csv``` are in your working directory otherwise the program won't be able to find them.**

## Output
The program outputs three files ```euclidean_output.csv```, ```chebyshev_output.csv``` and ```manhattan_output.csv```, where for each one it prints its results based on the corrosponding metric to the file name.  
For example: 
```
Iris-setosa
Iris-virginica
Iris-virginica
Iris-versicolor
```




