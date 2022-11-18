def alternate(A):
	for v in A: # v は A の上を動く
		v_is_largest = True #今調べている A 中の要素 を 最大の要素と仮定する
		for x in A: # x は A の上を動かす
			if v < x: 
				v_is_largest = False # v よりも 大きい要素が A 中に存在する時には v は最大の要素ではない
				break
			if v_is_largest: # 二個目のループが break せずに終了したら v が最大の要素である
				return v
			return None