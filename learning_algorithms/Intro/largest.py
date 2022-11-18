def largest(A):
    my_max = A[0] # 最初の要素を 最小として仮定する
    for idx in range(1, len(A)): # 配列の長さ分 反復処理する
        if my_max < A[idx]:
            my_max = A[idx]
        return my_max