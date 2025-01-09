n = int(input().strip())
s = [input().strip() for _ in range(n)]

polyhedrons = {
    'Tetrahedron' : 4,
    'Cube' : 6,
    'Octahedron' : 8,
    'Dodecahedron' : 12,
    'Icosahedron' : 20
}

face = 0

for shape in s:
    if shape in polyhedrons:
        face += polyhedrons[shape]

print(face)