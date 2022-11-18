def tournament_two(A):
    N = len(A)    # A の要素数を使って試合数を管理する
    winner = [None] * (N - 1) # 値の比較 を 勝ち上がった値を格納する配列
    loser = [None] * (N - 1)  # 値の比較 で 負けた値を格納する配列
    prior = [-1] * (N - 1)    # 前の試合の結果を格納する配列, 1 開戦目には、 -１のみが格納されている

    idx = 0 # 1 ラウンド における 試合の数を数える変数
    for i in range(0, N, 2): # 一回戦に対応する初期化。
        if A[i] < A[i + 1]:
            winner[idx] = A[i + 1]
            loser[idx] = A[i]
        else:
            winner[idx] = A[i]
            loser[idx] = A[i + 1]
        idx += 1

    m = 0  # winner の上を 2つ飛ばしで動いて、試合を進めるための変数

    while idx < N - 1:
        if winner[m] < winner[m + 1]:   # 勝った方を 今回のトーナメントの winner に登録する
            winner[idx] = winner[m + 1]
            loser[idx] = winner[m]
            prior[idx] = m + 1          # 後で、今回のラウンドの勝者を確認するための配列にも登録しておく      
        else:
            winner[idx] = winner[m]
            loser[idx] = winner[m + 1]
            prior[idx] = m
        m += 2      # 試合が終わったら、次の試合に行く
        idx += 1