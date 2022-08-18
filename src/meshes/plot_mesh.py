import numpy as np
import polyscope as ps

import potpourri3d as pp3d

ps.init()

filename = 'spot.obj'
V, F = pp3d.read_mesh(filename)
N_vert = len(V)
ps_mesh = ps.register_surface_mesh("my mesh", V, F)
with open('distances') as f:
    lines = f.read().splitlines()
lines = [float(x) for x in lines][1:]
dists = np.array(lines)

ps_mesh.add_distance_quantity(
    "distances", dists, enabled=True, stripe_size=0.01
)

ps.show()
