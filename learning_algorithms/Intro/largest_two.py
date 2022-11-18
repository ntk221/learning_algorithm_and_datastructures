# implemented by me
def my_largest_two(A):
    my_max = A[0] 
    my_max_second = A[1] # 2 番目の要素を、2 番目に小さい値として仮定する
   #if my_max < my_max_second:
   #    my_max, my_max_second = my_max_second, my_max
    for idx in range(1, len(A)):
        if my_max < A[idx]:
            my_max_second = my_max  # 今までの my_max は my_max_second にする
            my_max = A[idx] # 発見した値は、 my_max に保存する
       #elif my_max_second < A[idx] 
       #    my_max_second = A[idx]my    
        return (my_max, my_max_second)

# text
def largest_two(A):
    my_max,second = A[:2]                
    if my_max < second:
       my_max,second = second,my_max
    for idx in range(2, len(A)):
        if my_max < A[idx]:                
            my_max,second = A[idx],my_max
        elif second < A[idx]:              
            second = A[idx]
    return (my_max, second)

if __name__ == "__main__":
    assert largest_two([1, 2, 3, 4]) == (4, 3)
    assert largest_two([3, 2, 1, 5]) == (5, 3)
    assert largest_two([0,0]) == (0, 0)
    assert largest_two([-1, -2, 0]) == (0, -1)
    #assert my_largest_two([1, 2, 3, 4]) == (4, 3)
    #assert my_largest_two([3, 2, 1, 5]) == (5, 3)