#pragma once

static int DOTA_KEY_ATTACK = 0x20;
static int DOTA_KEY_LAUGH = 0x00;
static int DOTA_KEY_THANKS = 0x00;
static int DOTA_KEY_SELECT_HERO = 0x00;
static int DOTA_KEY_SELECT_COURIER = 0x00;
static bool DOTA_FEED_COURIERS = true;

const int Store[2] = { 600, 20 };
const int Play[2] = { 730, 20 };
const int FindMatch[2] = { 500, 250 };
const int AcceptMatch[2] = { 650, 350 };
const int LockHero[2] = { 700, 625 };
const int Thanks[2] = { 1000, 200 };
const int Mid[2] = { 110, 770 };
const int Leave[2] = { 1100, 555 };
const int Shop[2] = { 1500, 720 };
const int Courier[2] = { 1300, 400 };

void GetConfig();