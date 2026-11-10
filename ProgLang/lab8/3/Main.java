public class Main {
    public static void main(String[] args) {
        int[][] a = {
            {5, 3, 8, 2},
            {7, 1, 4, 9},
            {6, 2, 0, 3},
            {1, 0, 5, 7}
        };
        int row = -1, col = -1;
        search:
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0) {
                    row = i;
                    col = j;
                    break search;
                }
            }
        }
        if (row == -1) {
            System.out.println("Нулей в массиве нет");
        } else {
            System.out.println("Первый ноль: строка " + row + ", столбец " + col);
        }
    }
}
