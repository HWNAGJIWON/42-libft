# 내가 생각 안 나서 적는 LIBFT 함수 정리



### ft_memset
어떤 메모리 시작점부터 연속된 범위를 모두 어떤 값으로 지정하고 싶을때 사용
``` C
void	*ft_memset(void *dst, int val, size_t size);
```

### ft_bzero
어떤 메모리 시작점부터 연속된 범위를 모두 0으로 지정하고 싶을때 사용
``` C
void	*ft_bzero(void *dst, size_t n);
```

### ft_memcpy
src의 데이터를 dest로 복사함
``` C
void	*ft_memcpy(void *dest, const void *src, size_t n);
```

### ft_memccpy
src의 데이터를 dest로 n만큼 복사함
``` C
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
```

### ft_memmove
src의 데이터를 dest로 n만큼 복사함 (널문자 고려x n만큼만 복사함)
``` C
void	*ft_memmove(void *dest, const void *src, size_t n);
```

### ft_memchr
메모리에 들어있는 값(str) 중에서 특정문자(c)를 찾아 찾은 위치의 주소값을 반환한다
``` C
void	*ft_memccpy(const void *str, int c, int c, size_t n);
```

### ft_memcmp
특정 메모리에서 원하는 크기만큼을 비교해 결과 값을 얻어내는 함수 (양수 : s1 > s2 / 0 : s1 == s2/ 음수 : s1 < s2)
``` C
int		ft_memcmp(const void *s1, const void *s2, size_t n);
```

### ft_strlen
메모리의 크기 null값 제외 카운트
``` C
int		ft_strlen(const char *s)
```

### ft_strlcpy
size-1만큼 string을 복사해주고 null을 보장해줌
``` C
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
```

### ft_strlcat
src를 dest의 끝에 추가해주는 함수이다(!결합되는 총길이!를 리턴)   
dest의 마지막 위치에 src를 size - strlen(dest) -1만큼 복사하고 끝에 널문자를 삽입한다.
``` C
size_t	ft_strlcat(char *dest, const char *src, size_t size);
```

### ft_strchr
문자열에서 특정 문자를 검색하는 방법  
해당 문자로 시작하는 문자열의 위치를 반환
``` C
char  *ft_strchr(const char *s, int c);
```

### ft_strrchr
문자열에서 마지막으로 있는 문자의 포인터를 리턴
``` c
char  *strrchr(const char *s, int c);
```

### ft_strnstr
big 문자열 len길이중에 little 문자열을 찾는다.
``` C
char  *strnstr(const char *big, const char *little, size_t len);
```

### ft_strncmp
문자열 s1과 문자열 s2를 n번째까지 비교한다.
``` c
int		ft_strncmp(const char *s1, const char *s2, size_t n);
```

### ft_calloc
size 크기의 변수를 count개만큼 저장할 수 있는 메모리 공간을 할당  
할당된 메모리 공간을 0으로 초기화
``` c
char	*ft_calloc(size_t count, size_t size);
```

### ft_strdup
포인터 s가 가리키는 문자열을 복사하고, 복사된 문자열에 대한 포인터를 반환  
함수 내부에서 malloc함(!)
``` c
char	*strdup(const char *s);
```

### ft_substr
문자열을 자를 때 사용하는 함수  
문자열 s의 start번째부터 len길이만큼 새로 할당한 배열에 저장 후 할당한 배열 리턴
``` C
char  *ft_substr(char const *s, unsigned int start, size_t len);
```

### ft_strjoin
문자열 s1과 s2를 연결한 새 문자열 반환 (함수 내부에서 malloc 사용)  
할당 실패시 널 리턴
``` c
char *ft_strjoin(char const *s1, char const *s2);
```

### ft_strtrim
s1에서 set에 지정된 문자가 제거된 문자열 s1의 사본을 반환  
s1의 앞뒤에 set에 있는 문자가 있으면 해당 문자들을 trim한 후 리턴  
set에 있는 문자 하나하나 해당되면 삭제함
``` c
char	*ft_strtrim(char const *s1, char const *set);
```

### ft_split


### ft_atoi
입력된 정수를 문자열로 바꿔줌
``` c
char	*ft_itoa(int n);
```

### ft_strmapi
문자열 s의 각 인덱스에 담긴 값에 함수 f를 적용한 결과를 반환해 주는 함수
함수 사용 예제 
```
s가 "abcde" 
ft_strmapi(*s, plus(i, s[i]));  
결과 : "bcdef"
```
``` c
char	*ft_strmapi(char const *s, char (*f)(unsigned int , char));
```

### ft_putchar_fd
문자 c를 주어진 파일 스크립터로 출력  
unistd 헤더파일 추가
``` c
void	ft_putchar_fd(char c, int fd);
```

### ft_putstr_fd
문자열 s를 주어진 파일 스크립터로 출력  
unistd 헤더파일 추가
``` c
void	ft_putstr_fd(char *s, int fd);
```

### ft_putendl_fd
문자열 s를 주어진 파일 스크립터로 출력하고 newline으로 끝내기
``` c
void	ft_putchar_fd(char c, int fd);
```

### ft_putnbr_fd
문자 c를 주어진 파일스트립터로 출력
``` c
void	ft_putnbr_fd(int n, int fd);
```
