// Chap_03_09_Bitflag_Bitmask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    cout << "-------------------------------------" << endl;
    cout << "[[Bit Flag]]" << endl;
    cout << "-------------------------------------" << endl;
    const unsigned char opt[8] = { 1 << 0, 1 << 1, 1 << 2, 1 << 3,
                                   1 << 4, 1 << 5 ,1 << 6, 1 << 7 };

    for (int i = 0; i < 8; i++)
    {
        cout << "Item " << i << " Flag : " << bitset<8>(opt[i]) << endl;
    };

    unsigned char item_flag = 0;

    cout << "--------------------------" << endl;
    cout << "No Item\t\t: " << bitset<8>(item_flag) << endl;
    
    // item0 on
    item_flag |= opt[0];
    cout << "Item0 obtained\t: " << bitset<8>(item_flag) << endl;

    // item3 on
    item_flag |= opt[3];
    cout << "Item3 obtained\t: " << bitset<8>(item_flag) << endl;

    // item3 lost
    cout << "--------------------------" << endl;
    cout << "item_flag\t: " << bitset<8>(item_flag) << endl;
    cout << "~opt[3]\t\t: " << bitset<8>(~opt[3]) << endl;
    item_flag &= ~opt[3];
    cout << "Item3 lost\t: " << bitset<8>(item_flag) << endl;
    cout << "--------------------------" << endl;

    // has item1 ?
    cout << "Have you item1?\t: ";
    if (item_flag & opt[1]) { cout << bitset<8>(item_flag) << "\t: Has item1" << endl; }
    else { cout << bitset<8>(item_flag) << "\t: Not have item1" << endl; }

    // has item0 ?
    cout << "Have you item0?\t: ";
    if (item_flag & opt[0]) { cout << bitset<8>(item_flag) << "\t: Has item0" << endl; }
    else { cout << bitset<8>(item_flag) << "\t Not have item1" << endl; }
    cout << "--------------------------" << endl;

    // obtain item 2, 3
    cout << "item_flag\t\t: " << bitset<8>(item_flag) << endl;
    item_flag |= (opt[2] | opt[3]);
    cout << "(opt[2] | opt[3])\t: " << bitset<8>(opt[2] | opt[3]) << endl;
    cout << "Item 2, 3 obtained\t: " << bitset<8>(item_flag) << endl;
    // item 2�� ������ �ְ�, item 1�� ���� ���� ���� ��� item2�� �Ҿ������ item1�� ����
    if ((item_flag & opt[2]) && !(item_flag & opt[1]))
    {
        item_flag ^= opt[2] | opt[1];
    }
    cout << "Item 1, 2 XOR\t\t: " << bitset<8>(item_flag) << endl;

    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "[[Bit Mask]]" << endl;
    cout << "-------------------------------------" << endl;

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    cout << "red_mask\t: " << bitset<32>(red_mask) << endl;
    cout << "green_mask\t: " << bitset<32>(green_mask) << endl;
    cout << "blue_mask\t: " << bitset<32>(blue_mask) << endl;
    
    cout << endl;
    unsigned int pixel_color = 0xFFD700; // Gold color
    cout << "gold color\t: " << bitset<32>(pixel_color) << endl;

    unsigned char blue = pixel_color & blue_mask;
    cout << "blue\t\t: " << bitset<8>(blue) << " " << static_cast<int>(blue) << endl;
    unsigned char green = (pixel_color & green_mask) >> 8;
    cout << "green\t\t: " << bitset<8>(green) << " " << static_cast<int>(green) << endl;
    unsigned char red = (pixel_color & red_mask) >> 16;
    cout << "red\t\t: " << bitset<8>(red) << " " << static_cast<int>(red) << endl;

    // ��������
    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "[[Exercise]]" << endl;
    cout << "-------------------------------------" << endl;

    unsigned char option_viewed = 0x01;  // ��縦 ���� ��
    unsigned char option_edited = 0x02;  // ��� ����
    unsigned char option_liked = 0x04;   // ����� ���ƿ� Ŭ��
    unsigned char option_shared = 0x08;  // ����� ���� Ŭ��
    unsigned char option_deleted = 0x80; // �� ��縸 ����

    unsigned char my_article_flags = 0;
    cout << "��縦 ���� ��\t\t\t\t: " << bitset<8>(option_viewed) << endl;
    cout << "��縦 �������� ��\t\t\t: " << bitset<8>(option_edited) << endl;
    cout << "����� ���ƿ並 Ŭ������ ��\t\t: " << bitset<8>(option_liked) << endl;
    cout << "����� ������ Ŭ������ ��\t\t: " << bitset<8>(option_shared) << endl;
    cout << "��縦 �������� ��\t\t\t: " << bitset<8>(option_deleted) << endl;
    cout << "-------------------------------------" << endl;

    // ��縦 ���� ��
    my_article_flags |= option_viewed;
    cout << "��縦 ���� ��\t\t\t\t: " << bitset<8>(my_article_flags) << endl;
    // ����� ���ƿ並 Ŭ������ ��
    my_article_flags |= option_liked;
    cout << "����� ���ƿ並 Ŭ������ ��\t\t: " << bitset<8>(my_article_flags) << endl;
    // ����� ���ƿ並 �ٽ� Ŭ������ ��
    my_article_flags &= ~(option_liked);
    cout << "����� ���ƿ並 �ٽ� Ŭ������ ��\t: " << bitset<8>(my_article_flags) << endl;
    // �� ��縸 ������ ��
    my_article_flags |= option_deleted;
    cout << "�� ��縸 ������ ��\t\t\t: " << bitset<8>(my_article_flags) << endl;
}