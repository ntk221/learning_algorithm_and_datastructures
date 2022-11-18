def sorting_two(A):
    return tuple(sorted(A, reverse=True)[:2]) # 昇順にソートしたものを reverse で降順にして、 最初の二つをtuple で返す


def double_two(A):
    my_max = max(A) # max(A)で、 A から 最大値を取り出し my_max に格納する.

    copy = list(A)      # A をコピーする
    copy.remove(my_max) # copy から my_max を取り除く

    return (my_max, max(copy)) # my_max と my_max を取り除いた copy の最大値(元の A の 2 番目の最大値)の組みを返す


def mutable_two(A):
    idx = max(range(len(A), key=A.__getitem__)) # A の最大値の. index を取得する

    my_max = A[idx]

    del A[idx]      # A から 最大値を取り除く
    second = max(A)

    A.insert(idx, my_max) # 取り除いた my_max を元に戻す

    return (my_max, second)