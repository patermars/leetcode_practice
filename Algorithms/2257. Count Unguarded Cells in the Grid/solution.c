int countUnguarded(int m, int n, int** guards, int guardsSize, int* guardsColSize, int** walls, int wallsSize, int* wallsColSize) {
    int** grid = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++){
        grid[i] = (int*)calloc(n, sizeof(int));
    }
    for (int i = 0; i < wallsSize; i++){
        grid[walls[i][0]][walls[i][1]] = 1;
    }
    for (int i = 0; i < guardsSize; i++){
        grid[guards[i][0]][guards[i][1]] = 1;
    }
    for (int i = 0; i < guardsSize; i++) {
        int r = guards[i][0], c = guards[i][1];
        for (int x = r - 1; x >= 0 && grid[x][c] != 1; x--)
            grid[x][c] = 2;
        for (int x = r + 1; x < m && grid[x][c] != 1; x++)
            grid[x][c] = 2;
        for (int y = c - 1; y >= 0 && grid[r][y] != 1; y--)
            grid[r][y] = 2;
        for (int y = c + 1; y < n && grid[r][y] != 1; y++)
            grid[r][y] = 2;
    }
    int unguarded = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (grid[i][j] == 0){
                unguarded++;
            }
        }
    }
    for (int i = 0; i < m; i++){
        free(grid[i]);
    }
    free(grid);
    return unguarded;
}