// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <iostream>

#include "hello_shared.h"
#include "hello_static.h"

using namespace std;

int main(int argc, char* argv[]) {
  cout <<  GetStaticText() << ", " << GetSharedText() << " " << GetSharedNumber() << endl;
  return 0;
}
