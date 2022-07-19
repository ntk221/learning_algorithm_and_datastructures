def flawed(A):
    my_max = 0 # A 中に 0 以下の要素が含まれないと仮定している
    for v in A:
        if my_max < v:
           my_max = v
        return my_max 