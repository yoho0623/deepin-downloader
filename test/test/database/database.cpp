#include <iostream>
#include "gtest/gtest.h"
#include "/home/bulw/test/downloadmanager/src/include/database/database.h"

class databaseTest : public ::testing::Test {
protected:


    databaseTest() {
    }

    virtual ~databaseTest() {

    }
    virtual void SetUp() {

    }

    virtual void TearDown() {

    }

};

TEST_F(databaseTest, getDB) {
    QSqlDatabase q = DataBase::Instance().getDB();
    bool ret = q.open();
    EXPECT_TRUE(ret);
}

