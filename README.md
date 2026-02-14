# Tic-Tac-Toe

A console-based two-player Tic-Tac-Toe game implemented in C.

## Overview

This project implements the classic 3x3 Tic-Tac-Toe game played between two players in the terminal. Players take turns marking the board with X and O until one player wins or the game ends in a draw.

## Features

- Two-player mode
- 3x3 game board
- Win detection (rows, columns, diagonals)
- Draw detection
- Turn-based gameplay
- Console-based interface

## How It Works

1. The game initializes an empty 3x3 board.
2. Player 1 uses 'X' and Player 2 uses 'O'.
3. Players take turns entering their move position.
4. After each move, the program checks for:
   - Winning condition
   - Draw condition
5. The game ends when a player wins or the board is full.

## Project Structure

All files are located in the root directory:

Tic-Tac-Toe/
│
├── main.c # Program entry point
├── play.c # Game logic and board handling
├── header.h # Function declarations and shared definitions
├── README.md
└── .gitignore

## Compilation

Compile using gcc:

```bash
gcc *.c -o tictactoe

## Usage

Run the game:

./tictactoe
