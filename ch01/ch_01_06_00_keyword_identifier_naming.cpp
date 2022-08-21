// ch_01_06_00_keyword_identifier_naming.cpp



void    addNumber() //... 함수동작에 대한 주석
{
    ;
}

// verse + noun 형식이 보통이다.
// 코딩스타일은 같이 코딩하는 집단의 룰에 맞춘다. 혹은 협의한다.
void    getNumber()
{
    ;
}

class MyClass
{
    public:
        int _variable;
};

int main()
{
    int n_apples;
    int nApples;
    int _apples; // system programming하는 분들이 과거에 _를 많이 붙였다.
    // 최근에는 class member로 구분하기 위해 _로 변수명을 시작하는 경우가 늘었다.

    addNumber();
}