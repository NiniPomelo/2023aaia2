///week13-1.cpp �F�� 2D �}�C�A�A�� C Tutor����
#include <stdio.h>
void myPrint(int x[3][4]){
    for(int i=0; i<3; i++){ /// �u����i�B
        for(int j=0; j<4; j++){ /// �k��j�v
            printf("%2d ", x[i][j] );
        }
        printf("\n");
    }
}

int main()
{
    int a[3][4]; ///�}�C���ŧi�A�S���ȡA�|�O�ýX
    int b[3][4] = {1,2,3}; ///�����ȡA���S����
    int c[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12} };
    ///�������ȡA����
    myPrint(a); ///���U�� Python C Tutor �ɡA�n���ѱ��A�]�ýX�|�X��
    myPrint(b);
    myPrint(c); ///���[��L�X�Ӫ��ȡA�P�ɫ�ҡu����i�B�k��j�v

}
