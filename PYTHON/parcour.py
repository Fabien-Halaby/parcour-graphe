def BFS(G,s):
	aTraiter = []
	dejaVu = []

	aTraiter.append(s)
	dejaVu.append(s)

	while aTraiter:
		si = aTraiter[0]
		aTraiter = aTraiter[1:]
		for t in G[si]:
			if t not in dejaVu:
				dejaVu.append(t)
				aTraiter.append(t)

	print('BFS:',dejaVu)


def DFS(G,s):
	aTraiter = []
	dejaVu = []

	aTraiter.append(s)
	dejaVu.append(s)

	while aTraiter:
		si = aTraiter.pop()
		for t in G[si]:
			if t not in dejaVu:
				dejaVu.append(t)
				aTraiter.append(t)

	print('DFS:',dejaVu)



G = {
	'a':['b','g'],
	'b':['c','e','g'],
	'c':['d','f','e'],
	'd':['c'],
	'e':['c','b','g','h','i','f'],
	'f':['c','e','i'],
	'g':['a','b','e','h'],
	'h':['e','g','i'],
	'i':['f','e','h']
}

BFS(G,'a')
DFS(G,'a')
