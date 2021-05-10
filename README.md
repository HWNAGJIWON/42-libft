# 내가 생각 안 나서 적는 LIBFT 함수 역할 정리



### ft_memset
어떤 메모리 시작점부터 연속된 범위를 모두 어떤 값으로 지정하고 싶을때 사용
``` C
void *ft_memset(void *dst, int val, size_t size);
```

### ft_bzero
어떤 메모리 시작점부터 연속된 범위를 모두 0으로 지정하고 싶을때 사용
``` C
void *ft_bzero(void *dst, size_t n);
```

### ft_memcpy
src의 데이터를 dest로 n만큼 복사함
``` C
void *ft_memcpy(void *dst, const void *src, int c, size_t n);
```

### ft_memccpy

