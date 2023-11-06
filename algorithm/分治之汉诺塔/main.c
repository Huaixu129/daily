/* �ƶ�һ��Բ�� */
void move(int *src, int *srcSize, int *tar, int *tarSize) {
    // �� src �����ó�һ��Բ��
    int pan = src[*srcSize - 1];
    src[*srcSize - 1] = 0;
    (*srcSize)--;
    // ��Բ�̷��� tar ����
    tar[*tarSize] = pan;
    (*tarSize)++;
}

/* ��⺺ŵ�������� f(i) */
void dfs(int i, int *src, int *srcSize, int *buf, int *bufSize, int *tar, int *tarSize) {
    // �� src ֻʣ��һ��Բ�̣���ֱ�ӽ����Ƶ� tar
    if (i == 1) {
        move(src, srcSize, tar, tarSize);
        return;
    }
    // ������ f(i-1) ���� src ���� i-1 ��Բ�̽��� tar �Ƶ� buf
    dfs(i - 1, src, srcSize, tar, tarSize, buf, bufSize);
    // ������ f(1) ���� src ʣ��һ��Բ���Ƶ� tar
    move(src, srcSize, tar, tarSize);
    // ������ f(i-1) ���� buf ���� i-1 ��Բ�̽��� src �Ƶ� tar
    dfs(i - 1, buf, bufSize, src, srcSize, tar, tarSize);
}

/* ��⺺ŵ�� */
void solveHanota(int *A, int *ASize, int *B, int *BSize, int *C, int *CSize) {
    // �� A ���� n ��Բ�̽��� B �Ƶ� C
    dfs(*ASize, A, ASize, B, BSize, C, CSize);
}
