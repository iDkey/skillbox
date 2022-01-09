//
// Created by zholu on 19/11/2021.
//

#ifndef TASK2_IGRAPH_H
#define TASK2_IGRAPH_H

#pragma once
#include <iostream>
#include <vector>

class IGraph
{
public:

    virtual ~IGraph() {};

    virtual void AddEdge(size_t from, size_t to) = 0;

    virtual int VerticesCount() const = 0;

    virtual void ShowGraph() const = 0;

    virtual void GetNextVertices(size_t vertex, std::vector<size_t> &vertices) const = 0;

    virtual void GetPrevVertices(size_t vertex, std::vector<size_t> &vertices) const = 0;

};

#endif //TASK2_IGRAPH_H
