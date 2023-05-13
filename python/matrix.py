matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
transpose = []
for i in range(3):
    transpose.append([row[i] for row in matrix])
    print(transpose)

