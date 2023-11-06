/* 移动一个圆盘 */
void move(int *src, int *srcSize, int *tar, int *tarSize) {
    // 从 src 顶部拿出一个圆盘
    int pan = src[*srcSize - 1];
    src[*srcSize - 1] = 0;
    (*srcSize)--;
    // 将圆盘放入 tar 顶部
    tar[*tarSize] = pan;
    (*tarSize)++;
}

/* 求解汉诺塔：问题 f(i) */
void dfs(int i, int *src, int *srcSize, int *buf, int *bufSize, int *tar, int *tarSize) {
    // 若 src 只剩下一个圆盘，则直接将其移到 tar
    if (i == 1) {
        move(src, srcSize, tar, tarSize);
        return;
    }
    // 子问题 f(i-1) ：将 src 顶部 i-1 个圆盘借助 tar 移到 buf
    dfs(i - 1, src, srcSize, tar, tarSize, buf, bufSize);
    // 子问题 f(1) ：将 src 剩余一个圆盘移到 tar
    move(src, srcSize, tar, tarSize);
    // 子问题 f(i-1) ：将 buf 顶部 i-1 个圆盘借助 src 移到 tar
    dfs(i - 1, buf, bufSize, src, srcSize, tar, tarSize);
}

/* 求解汉诺塔 */
void solveHanota(int *A, int *ASize, int *B, int *BSize, int *C, int *CSize) {
    // 将 A 顶部 n 个圆盘借助 B 移到 C
    dfs(*ASize, A, ASize, B, BSize, C, CSize);
}
