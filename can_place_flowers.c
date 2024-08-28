bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
     int c=0;
    for (int i = 0; i < flowerbedSize; i++) {
        if (flowerbed[i] == 0) {
            bool left_empty=(i == 0)||(flowerbed[i - 1] == 0);
            bool right_empty=(i == flowerbedSize - 1)||(flowerbed[i + 1] == 0);
            if (left_empty && right_empty) {
                flowerbed[i++] = 1; 
                c++;      
            }
        }
    }
    return c>=n;
}
