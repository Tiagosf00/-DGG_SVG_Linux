# DGG_SVG_Linux

This is the source code for the graph-based discrete geodesic algorithms in the following paper:

```
Fast Construction of Discrete Geodesic Graphs
YOHANES YUDHI ADIKUSUMA, ZHENG FANG, and YING HE, Nanyang Technological University
ACM Trans. Graph., Vol. 39, No. 2, Article 14, Publication date: March 2020.
```

It was based on the implementation available in this [repository](https://github.com/GeodesicGraph/DGG_and_SVG), made by the paper authors, but it was refactored to run on linux based systems.

---
### Compling the code

1. Enter the `src/` directory.

2. To compile the geodesic graph pre computing module, use the command:

    ```Batchfile
    make DGG_Precompute
    ```

3. To compile the shortest path module, use the command:

    ```Batchfile
    make DGG_Solution
    ```

---
### Usage of commands

1. To generate the geodesic graph, use the command:

    ```Batchfile
    ./DGG_Precompute [method] [model] [accuracy_control_parameter] [number_of_threads]
    ```
    - method: `'f'` for FastDGG or `'s'` for SVG
	- model: `.obj/.off` format mesh file
	- accuracy_control_parameter: an expected relative mean error *`ε`* (`'0.01'` represents *`ε`*`= 1%`)
	- number_of_threads: using multiple threads to accelerate the process

    Example:
    ```Batchfile
    ./DGG_Precompute f meshes/spot_mini.obj 0.01 8
    ```

2. To generate the geodesic distances, use the command:

    ```Batchfile
    DGG_Solution [method] [model] [graph_binary_file] [source] [output_distance_file]  
    ```

    - method: `'SSAD'` for single-source-all-destination or `'MSAD'` for multiple-source-all-destination
	- model: `.obj/.off` format mesh file
	- graph_binary_file: the precomputed geodesic graph in `.binary` format
	- source: 0-based source `vertex id` for single source or source `file name` for multiple sources
	- output_distance_file: a file saving the distance field

    Example:
    ```Batchfile
    ./DGG_Solution SSAD meshes/spot_mini.obj meshes/spot_mini_FD0.0100000000_c5.binary 0 distances.txt
    ```

You can visualize the geodesic distances with the python script `meshes/plot_mesh.py`.