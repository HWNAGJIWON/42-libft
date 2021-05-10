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
``` C
size_t	ft_strlcat(char *dest, const char *src, size_t size);
```
