/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISearchSiteContent_200_response.h
 *
 * 
 */

#ifndef OAISearchSiteContent_200_response_H
#define OAISearchSiteContent_200_response_H

#include <QJsonObject>

#include "com.spoonacular.client.model\OAISearchSiteContent_200_response_Articles_inner.h"
#include "com.spoonacular.client.model\OAISearchSiteContent_200_response_Grocery_Products_inner.h"
#include <QList>
#include <QSet>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISearchSiteContent_200_response_Articles_inner;
class OAISearchSiteContent_200_response_Grocery_Products_inner;

class OAISearchSiteContent_200_response : public OAIObject {
public:
    OAISearchSiteContent_200_response();
    OAISearchSiteContent_200_response(QString json);
    ~OAISearchSiteContent_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QSet<OAISearchSiteContent_200_response_Articles_inner> getArticles() const;
    void setArticles(const QSet<OAISearchSiteContent_200_response_Articles_inner> &articles);
    bool is_articles_Set() const;
    bool is_articles_Valid() const;

    QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> getGroceryProducts() const;
    void setGroceryProducts(const QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> &grocery_products);
    bool is_grocery_products_Set() const;
    bool is_grocery_products_Valid() const;

    QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> getMenuItems() const;
    void setMenuItems(const QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> &menu_items);
    bool is_menu_items_Set() const;
    bool is_menu_items_Valid() const;

    QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> getRecipes() const;
    void setRecipes(const QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> &recipes);
    bool is_recipes_Set() const;
    bool is_recipes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QSet<OAISearchSiteContent_200_response_Articles_inner> articles;
    bool m_articles_isSet;
    bool m_articles_isValid;

    QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> grocery_products;
    bool m_grocery_products_isSet;
    bool m_grocery_products_isValid;

    QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> menu_items;
    bool m_menu_items_isSet;
    bool m_menu_items_isValid;

    QSet<OAISearchSiteContent_200_response_Grocery_Products_inner> recipes;
    bool m_recipes_isSet;
    bool m_recipes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISearchSiteContent_200_response)

#endif // OAISearchSiteContent_200_response_H
