//
// Created by zholu on 19/11/2021.
//

#ifndef TASK2_LISTGRAPH_H
#define TASK2_LISTGRAPH_H
#pragma once
#include <map>
#include <vector>
#include "igraph.h"

//
//  ListGraph class
//
class ListGraph : public IGraph
{

    std::map<std::size_t, std::vector<std::size_t>> _graph;

public:
    ListGraph();

    ListGraph(IGraph* oth);

    //ListGraph(const ListGraph &list_g);

    //ListGraph& operator= (const ListGraph &list_g);

    ~ListGraph();

// Метод принимает вершины начала и конца ребра и добавляет ребро
    void AddEdge(size_t from, size_t to) override;

// Метод должен считать текущее количество вершин
    int VerticesCount() const override;

// Вывод графа в консоль
    void ShowGraph() const override;

// Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
    void GetNextVertices(size_t vertex, std::vector<size_t> &vertices) const override;

// Для конкретной вершины метод выводит в вектор “вершины” все вершины, из которых можно дойти по ребру в данную
    void GetPrevVertices(size_t vertex, std::vector<size_t> &vertices) const override;

    void GetNameVertices(std::vector<std::size_t> & name) const;
};

#endif //TASK2_LISTGRAPH_H
