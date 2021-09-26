#include <iostream>
#include "funcs.h"

//----------------- task A -----------------

std::string box(int width, int height)
{
  std::string result = "";

  for (int row = 0; row < height; row++)
  {
    for (int col = 0; col < width; col++)
    {
      result += "*";
    }
    result += "\n";
  }

  return result;
}

//----------------- task B -----------------

std::string checkerboard(int width, int height)
{
  std::string result = "";

  for (int row = 0; row < height; row++)
  {
    for (int col = 0; col < width; col++)
    {
      if (row % 2 == 0) //if row is even
      {
        if (col % 2 == 0) //if col is even
          result += "*";
        else
          result += " ";
      }
      else
      {
        if (col % 2 == 0)
          result += " ";
        else
          result += "*";
      }
    }
    result += "\n";
  }

  return result;
}

//----------------- task C -----------------

std::string cross(int size)
{
  std::string result = "";
  int precedingSpaces = 0;

  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      if (col == precedingSpaces || col == size - precedingSpaces - 1)
          result += "*";
      else if (col < precedingSpaces) //add spaces before
        result += " ";
      else //add spaces between
        result += " ";
    }

    if (row < size / 2)
      precedingSpaces++;
    else if (size % 2 == 0 && row == size / 2)
      precedingSpaces -= 2;
    else //size is odd or (size is even and row > size / 2)
      precedingSpaces--;

    result += "\n";
  }

  return result;
}

//----------------- task D -----------------

std::string lower(int length)
{
  std::string result = "";

  for (int row = 0; row < length; row++)
  {
    for (int col = 0; col < length; col++)
    {
      if (col <= row)
        result += "*";
    }
    result += "\n";
  }

  return result;
}

//----------------- task E -----------------

std::string upper(int length)
{
  std::string result = "";
  int precedingSpaces = 0;

  for (int row = 0; row < length; row++)
  {
    for (int col = 0; col < length; col++)
    {
      if (col < precedingSpaces)
        result += " ";
      else
        result += "*";
    }

    precedingSpaces++;
    result += "\n";
  }

  return result;
}

//----------------- task F -----------------

std::string trapezoid(int width, int height)
{
  if (width - 2*(height - 1) < 1) //check this
    return "Impossible shape!\n";

  std::string result = "";
  int precedingSpaces = 0;

  for (int row = 0; row < height; row++)
  {
    for (int col = 0; col < width; col++)
    {
      if (col < precedingSpaces)
        result += " ";
      else if (col < width - precedingSpaces)
        result += "*";
    }

    precedingSpaces++;
    result += "\n";
  }

  return result;
}

//----------------- task G -----------------

std::string checkerboard3x3(int width, int height)
{
  std::string result = "";

  for (int row = 0; row < height; row++)
  {
    for (int col = 0; col < width; col++)
    {
      if (row / 3 % 2 == 0) //big row is even
      {
        if (col / 3 % 2 == 0) //big col is even
          result += "*";
        else
          result += " ";
      }
      else //big row is odd
      {
        if (col / 3 % 2 == 0) //big col is even
          result += " ";
        else
          result += "*";
      }
    }

    result += "\n";
  }

  return result;
}
