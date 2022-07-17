string random_ID_generator()
{

    stringstream ss;
    string id;

    id[0] = 'A' + rand() % 26;
    id[1] = 'A' + rand() % 26;
    int temp = rand() % 10 + 1;
    ss << temp;
    ss >> id[2];
    temp = rand() % 10 + 1;
    ss << temp;
    ss >> id[3];

    return id;
}
