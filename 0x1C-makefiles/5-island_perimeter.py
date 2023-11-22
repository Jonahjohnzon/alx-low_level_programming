#!/usr/bin/python3
"""Define island perimeter measuring function."""


def island_perimeter(grid):
    """Return perimiter of an island.
    """
    wid = len(grid[0])
    hei = len(grid)
    edge = 0
    size = 0

    for i in range(hei):
        for j in range(wid):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
