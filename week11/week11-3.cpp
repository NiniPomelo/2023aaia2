///week11-3.cpp �̤j���]�� ����۰��k
#include <stdio.h>
int gcd(int a, int b){ ///�Ѥja, �ѤGb, �ѤT a%b
    if(a==0) return b;
    if(b==0) return a; ///���o���A�i�H�R��1��A�]���|�洫
    return gcd(b, a%b); ///�ѤG�ɯ��ܦѤj�A�ѤTa%b�ܦѤG
}
int main()
{
    printf("�п�J2�ӼƦr: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("���׬O:%d", ans);
}