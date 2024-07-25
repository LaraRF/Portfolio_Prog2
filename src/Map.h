//
// Created by lrfri on 24.07.2024.
//

#ifndef RAYLIBSTARTER_MAP_H
#define RAYLIBSTARTER_MAP_H

#include <vector>
#include "raylib.h"
#include "config.h"
#include "ItemBase.h"
#include <random>
#include <queue>
#include <memory>
#include "Ring.h"
#include "Shield.h"
#include "Sword.h"

enum TileType {Traversable, Blocked, Beginning, End, TreasureChest};

struct Node {
    int x, y;
    int g, h;
    int f() const { return g + h; }
    Node* parent;

    Node(int x, int y) : x(x), y(y), g(0), h(0), parent(nullptr) {}
};

struct CompareNode {
    bool operator()(const Node* lhs, const Node* rhs) const {
        return lhs->f() > rhs->f();
    }
};

class map {
protected:

    std::vector<int> tileMap;
public:
    map();
    void generateMap();
    void drawMap(int screenWidth, int screenHeight);

    const int mapsize=15;
    const int tilesize=32;
    const int itemcount=5;

    int startX;
    int startY;
    int endX;
    int endY;
    //items
    //Sword* Sword_1 = new Sword(2.5f, "Steel Sword", "A sharp steel Sword", 100, 10);
    //Ring* Ring_1 = new Ring(0.1f, "Gold Ring", "A shiny gold Ring", 50, 5);
    //Shield* Shield_1 = new Shield(5.0f, "Iron Shield", "A sturdy iron Shield", 75, 15);

private:
    std::vector<std::vector<TileType>> Map;
    std::vector<std::unique_ptr<ItemBase>> items;
    std::mt19937 randomnumbergenerator;

    void initializeMap();
    void placeStartAndEnd();
    void addObstacles();
    bool isValidMove(int x, int y) const;
    bool findPathAStar();
    int calculateHeuristic(int x1, int y1, int x2, int y2) const;
    void spawnItems();
    std::pair<int, int> findRandomTraversableTile();
};


#endif //RAYLIBSTARTER_MAP_H
