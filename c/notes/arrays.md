# Arrays
- It is a set of elements.
- Arrays are used to store multiple values in a single variable.
- All elements in an array must be of same data type.

## Accessing an array elements
- Elements of an array are accessed using it's index number.
- Array index starts with 0.
- `for` loop/loops is/are used to iterate through the elements of an array(`Single, 2D, 3D`).

## Multidimensional arrays
1D arrays are more common in an embedded/automotive C programming than 2D and 3D.
### 2D array
- It is an array of arrays.
- 2D array is known as a matrix.
<pre>
int matrix[2][3] = {{1,2,3}, {4,5,6}};</pre>
- First dimension represents the number of rows, `[2]` and the second, the number of columns, `[3]`.
- To access an element of a 2D array, you must specify the index number of both the row and column.
- `matrix[0][0]` is to access the first element, the element at first row first column.
- Although 2D array looks like a table, C stores a 2D array in row-major order in the memory.
- `matrix[2][3]` in Memory: `1 2 3 4 5 6`.

*Automotive Implementation*:
- 2D fuel map is common.
- `unit16_t fuelMap[16][16];`
- Dimensions: `RMP * Engine load`

### 3D array
- It is an array of arrays.
- Commonly called `3D array` and `cube` or `tensor` sometimes.
<pre>
int arr[2][3][4]</pre>
- First dimension represents number of `blocks` and `rows` and `columns` vice versa.
- `arr[2][3][4]` means 2 blocks, 3 rows each block and 4 columns per row.
- C stores it linearly in memory(row-major order).
<pre>
int arr[2][3][4] = {
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    },
    {
        {13,14,15,16},
        {17,18,19,20},
        {21,22,23,24}
    }
}; </pre>
Memory: `1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24`

*Automotive Implementation*:
1. Engine Calibration Maps
- adds paramenter to the common 2D fuel.
- `unit16_t fuelMap[8][16][16];`
- Dimensions: `Temperature * RMP * Engine load`.

2. Sensor Data Logging
- `unit16_t sensorData[10][8][100];`
- Meaning: `10 ECUs` `8 Sensors per ECU` and `100 Samples per Sensor`.

3. Camera/Image Processing
- `unit8_t image[480][640][3];`
- Dimensions: `Height * Width * RGB`.
- Access: `image[row][column][color];`
- Where: color = 0(Red), color = 1(Green) and color = 2(Blue). Common in ADAS and autonomous vehicle systems.

4. CAN Bus Logging
- `unit8_t canLog[50][8][64];`
- Meaning: 50 CAN IDs, 8 Bytes per CAN frame and 64 stored frames.
